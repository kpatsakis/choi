void fun()
{
  int entity_0 = 25;
  entity_0 = 100;
  char entity_2[87] = "";
  entity_2 = NULL;
  char entity_1 = 'z';
  char* entity_9;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_2, 'N', 87-1);
  entity_2[87-1]='';
  strcpy(entity_9, entity_2);
}