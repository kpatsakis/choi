void fun()
{
  int entity_8 = 97;
  entity_8 = 45;
  char entity_7[34] = "";
  entity_7 = NULL;
  char entity_5 = 'l';
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'I', 34-1);
  entity_7[34-1]='';
  strcpy(entity_3, entity_7);
}