void fun()
{
  int entity_3 = 42;
  char* entity_4;
  char entity_5[95] = "";
  entity_5 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_5, 'z', 95-1);
  entity_5[95-1]='';
  memset(entity_2, 'j', entity_3-1);
  entity_2[entity_3-1]='';
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[40-1]='';
  entity_3 = 87;
  entity_2[25] = 'K';
}