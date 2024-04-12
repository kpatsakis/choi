void fun()
{
  int entity_4 = 20;
  char* entity_9;
  char* entity_1;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_2 = 'C';
  entity_9 = (char*)malloc(50*sizeof(char));
  entity_9[50-1]='';
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  memset(entity_8, 'D', entity_4-1);
  entity_8[entity_4-1]='';
  memcpy(entity_9, entity_8, entity_4*sizeof(char));
}