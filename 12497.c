void fun()
{
  int entity_6 = 22;
  char* entity_7;
  char entity_4[29] = "";
  memset(entity_4, 'I', 29-1);
  entity_4[29-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}