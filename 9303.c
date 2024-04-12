void fun()
{
  int entity_1 = 94;
  char* entity_0;
  char entity_8[0] = "";
  entity_8 = NULL;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', entity_1-1);
  entity_2[entity_1-1]='';
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  memset(entity_8, 's', 0-1);
  entity_8[0-1]='';
  entity_2[77] = 'D';
}