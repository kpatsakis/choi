void fun()
{
  int entity_1 = 45;
  int entity_2 = 9;
  char* entity_0;
  char entity_7[82] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_7, 'c', 82-1);
  entity_7[82-1]='';
  entity_2 = 7;
  strcpy(entity_0, entity_7);
}