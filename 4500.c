void fun()
{
  int entity_9 = 44;
  char entity_5[18] = "";
  entity_5 = NULL;
  char* entity_6;
  char entity_2[2] = "";
  entity_2 = NULL;
  char entity_3 = 'K';
  memset(entity_2, 'W', 2-1);
  entity_2[2-1]='';
  memset(entity_5, 'r', 18-1);
  entity_5[18-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memcpy(entity_6, entity_2, 2*sizeof(char));
}