void fun()
{
  int entity_3 = 88;
  int entity_7 = 60;
  int entity_9 = 85;
  char* entity_1;
  char entity_0[74] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_0, 'o', 74-1);
  entity_0[74-1]='';
  strcpy(entity_1, entity_0);
}