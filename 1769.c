void fun()
{
  int entity_9 = 61;
  int entity_6 = 77;
  char* entity_8;
  char entity_2[92] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 92-1);
  entity_2[92-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_2);
}