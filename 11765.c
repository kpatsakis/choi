void fun()
{
  int entity_5 = 10;
  char* entity_7;
  char entity_8[68] = "";
  memset(entity_8, 'V', 68-1);
  entity_8[68-1]='0';
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_8, 68*sizeof(char));
}