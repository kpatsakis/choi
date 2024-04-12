void fun()
{
  int entity_6 = 83;
  char entity_7[16] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_7, 'S', 16-1);
  entity_7[16-1]='';
  strcpy(entity_2, entity_7);
}