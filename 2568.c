void fun()
{
  int entity_1 = 39;
  entity_1 = 67;
  char entity_7[46] = "";
  entity_7 = NULL;
  char entity_2[34] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'V', 34-1);
  entity_2[34-1]='';
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[95-1]='';
  memset(entity_7, 'p', 46-1);
  entity_7[46-1]='';
  entity_2[entity_1] = 'w';
}