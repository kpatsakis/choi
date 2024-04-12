void fun()
{
  int entity_6 = 55;
  char* entity_7;
  char entity_1[92] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_1, 'L', 92-1);
  entity_1[92-1]='';
  strcpy(entity_7, entity_1);
}