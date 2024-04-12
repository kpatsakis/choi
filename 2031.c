void fun()
{
  int entity_4 = 29;
  char entity_2[71] = "";
  entity_2 = NULL;
  char entity_3[60] = "";
  entity_3 = NULL;
  char* entity_6;
  char* entity_9;
  memset(entity_3, 'O', 60-1);
  entity_3[60-1]='';
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[88-1]='';
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  memset(entity_2, 'T', 71-1);
  entity_2[71-1]='';
  memcpy(entity_9, entity_2, 71*sizeof(char));
}