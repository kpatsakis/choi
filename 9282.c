void fun()
{
  int entity_6 = 31;
  char* entity_1;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[21-1]='';
  entity_8 = (char*)malloc(17*sizeof(char));
  entity_8[17-1]='';
  memset(entity_9, 'w', entity_6-1);
  entity_9[entity_6-1]='';
  entity_9[84] = 'h';
}