void fun()
{
  int entity_7 = 57;
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_3, 'B', 92-1);
  entity_3[92-1]='';
  strcpy(entity_4, entity_3);
}