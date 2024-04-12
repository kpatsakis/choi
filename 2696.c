void fun()
{
  int entity_9 = 35;
  char* entity_6;
  char entity_5[57] = "";
  entity_5 = NULL;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char entity_3[47] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', 47-1);
  entity_3[47-1]='';
  memset(entity_2, 'A', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_5, 'Z', 57-1);
  entity_5[57-1]='';
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[12-1]='';
  memcpy(entity_6, entity_2, entity_9*sizeof(char));
}