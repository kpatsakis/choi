void fun()
{
  int entity_3 = 90;
  char entity_7[38] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_7, 'F', 38-1);
  entity_7[38-1]='';
  strcpy(entity_4, entity_7);
}