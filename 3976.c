void fun()
{
  int entity_6 = 92;
  char* entity_9;
  char entity_0[74] = "";
  entity_0 = NULL;
  char entity_2 = 'o';
  memset(entity_0, 'A', 74-1);
  entity_0[74-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  entity_6 = 60;
  memcpy(entity_9, entity_0, 74*sizeof(char));
}