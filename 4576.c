void fun()
{
  int entity_1 = 45;
  int entity_4 = 36;
  char entity_9[82] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_7[53] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_9, 'w', 82-1);
  entity_9[82-1]='';
  memset(entity_7, 'C', 53-1);
  entity_7[53-1]='';
  memcpy(entity_3, entity_9, 82*sizeof(char));
}