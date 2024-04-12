void fun()
{
  int entity_7 = 90;
  int entity_2 = 15;
  char* entity_4;
  char entity_6[90] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'd', 90-1);
  entity_6[90-1]='';
  entity_4 = (char*)malloc(34*sizeof(char));
  entity_4[34-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  entity_2 = 74;
  strcpy(entity_9, entity_6);
}