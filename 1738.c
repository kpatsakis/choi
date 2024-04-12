void fun()
{
  int entity_9 = 67;
  entity_9 = 26;
  char entity_5[88] = "";
  entity_5 = NULL;
  char* entity_6;
  char* entity_2;
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_5, 'Z', 88-1);
  entity_5[88-1]='';
  memcpy(entity_2, entity_5, 88*sizeof(char));
}