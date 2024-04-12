void fun()
{
  int entity_7 = 3;
  int entity_6 = 2;
  char entity_2 = 'K';
  char* entity_9;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'K', entity_6-1);
  entity_3[entity_6-1]='';
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  entity_6 = 17;
  entity_3[6] = 'e';
}