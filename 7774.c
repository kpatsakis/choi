void fun()
{
  int entity_4 = 72;
  char* entity_0;
  char entity_1[93] = "";
  entity_1 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'o', entity_4-1);
  entity_7[entity_4-1]='';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[77-1]='';
  memset(entity_1, 'L', 93-1);
  entity_1[93-1]='';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  memcpy(entity_5, entity_7, entity_4*sizeof(char));
}