void fun()
{
  int entity_0 = 50;
  char entity_2[6] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'Y', 6-1);
  entity_2[6-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  entity_0 = 90;
  strcpy(entity_1, entity_2);
}