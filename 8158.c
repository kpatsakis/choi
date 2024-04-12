void fun()
{
  char* entity_5;
  char entity_8[6] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_9[82] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  memset(entity_9, 'N', 82-1);
  entity_9[82-1]='';
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  memset(entity_8, 'b', 6-1);
  entity_8[6-1]='';
  strcpy(entity_5, entity_8);
}