void fun()
{
  int entity_7 = 79;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_3;
  char* entity_5;
  memset(entity_2, 'x', entity_7-1);
  entity_2[entity_7-1]='';
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[50-1]='';
  entity_5 = (char*)malloc(24*sizeof(char));
  entity_5[24-1]='';
  memcpy(entity_5, entity_2, entity_7*sizeof(char));
}