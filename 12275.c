void fun()
{
  int entity_3 = 57;
  char entity_6[entity_3] = "";
  char* entity_7;
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'M', entity_3-1);
  entity_6[entity_3-1]='0';
  strcpy(entity_7, entity_6);
}