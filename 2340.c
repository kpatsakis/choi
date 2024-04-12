void fun()
{
  int entity_3 = 1;
  char* entity_6;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char entity_4[71] = "";
  entity_4 = NULL;
  memset(entity_7, 'C', entity_3-1);
  entity_7[entity_3-1]='';
  memset(entity_4, 'd', 71-1);
  entity_4[71-1]='';
  entity_6 = (char*)malloc(87*sizeof(char));
  entity_6[87-1]='';
  entity_3 = 25;
  entity_7[80] = 'K';
}