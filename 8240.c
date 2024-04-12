void fun()
{
  int entity_1 = 33;
  char entity_9 = 'G';
  char* entity_0;
  char* entity_4;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[88-1]='';
  memset(entity_2, 'q', entity_1-1);
  entity_2[entity_1-1]='';
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  entity_2[20] = 'W';
}