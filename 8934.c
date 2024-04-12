void fun()
{
  int entity_3 = 16;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char entity_2[71] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_1;
  entity_7 = (char*)malloc(90*sizeof(char));
  entity_7[90-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  memset(entity_5, 'm', entity_3-1);
  entity_5[entity_3-1]='';
  memset(entity_2, 'j', 71-1);
  entity_2[71-1]='';
  entity_3 = 1;
  entity_5[24] = 'q';
}