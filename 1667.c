void fun()
{
  int entity_5 = 23;
  int entity_2 = 17;
  int entity_9 = 14;
  entity_5 = 67;
  char entity_4 = 'D';
  char* entity_7;
  char entity_3[3] = "";
  entity_3 = NULL;
  memset(entity_3, 'b', 3-1);
  entity_3[3-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memcpy(entity_7, entity_3, 3*sizeof(char));
}