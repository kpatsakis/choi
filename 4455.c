void fun()
{
  int entity_4 = 5;
  int entity_9 = 22;
  char entity_0[83] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_3;
  memset(entity_0, 'g', 83-1);
  entity_0[83-1]='';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_0);
}