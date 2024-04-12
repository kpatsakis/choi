void fun()
{
  int entity_6 = 84;
  entity_6 = 60;
  char entity_9 = 'v';
  char entity_0[18] = "";
  entity_0 = NULL;
  char* entity_3;
  char* entity_5;
  memset(entity_0, 'L', 18-1);
  entity_0[18-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  memcpy(entity_5, entity_0, 18*sizeof(char));
}