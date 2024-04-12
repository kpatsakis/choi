void fun()
{
  int entity_3 = 45;
  int entity_4 = 15;
  entity_3 = 2;
  char* entity_5;
  char entity_7[30] = "";
  entity_7 = NULL;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'g', entity_3-1);
  entity_6[entity_3-1]='';
  memset(entity_7, 'b', 30-1);
  entity_7[30-1]='';
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  entity_6[99] = 'K';
}