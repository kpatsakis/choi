void fun()
{
  int entity_6 = 9;
  entity_6 = 100;
  char* entity_7;
  char entity_8[38] = "";
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'F', 38-1);
  entity_8[38-1]='0';
  memcpy(entity_7, entity_8, 38*sizeof(char));
}