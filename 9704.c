void fun()
{
  int entity_5 = 17;
  int entity_6 = 22;
  int entity_9 = 60;
  entity_9 = 14;
  char entity_3[80] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_3, 'L', 80-1);
  entity_3[80-1]='';
  memcpy(entity_2, entity_3, 80*sizeof(char));
}