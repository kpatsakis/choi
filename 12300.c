void fun()
{
  int entity_3 = 71;
  char* entity_7;
  char entity_2[70] = "";
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'M', 70-1);
  entity_2[70-1]='0';
  memcpy(entity_7, entity_2, 70*sizeof(char));
}