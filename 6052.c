void fun()
{
  int entity_4 = 31;
  char* entity_1;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char entity_5[13] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_0, 'x', entity_4-1);
  entity_0[entity_4-1]='';
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[68-1]='';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  memset(entity_5, 'b', 13-1);
  entity_5[13-1]='';
  entity_4 = 17;
  entity_0[89] = 'T';
}