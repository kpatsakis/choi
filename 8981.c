void fun()
{
  int entity_6 = 94;
  char* entity_7;
  char entity_2[62] = "";
  entity_2 = NULL;
  memset(entity_2, 'X', 62-1);
  entity_2[62-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_6 = 30;
  strcpy(entity_7, entity_2);
}