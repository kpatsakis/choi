void fun()
{
  int entity_7 = 100;
  entity_7 = 88;
  char entity_8[45] = "";
  entity_8 = NULL;
  char* entity_5;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  memset(entity_8, 'L', 45-1);
  entity_8[45-1]='';
  memcpy(entity_9, entity_8, 45*sizeof(char));
}