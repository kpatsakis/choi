void fun()
{
  int entity_2 = 80;
  int entity_6 = 99;
  char* entity_3;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_5 = 'y';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  memset(entity_7, 'd', entity_2-1);
  entity_7[entity_2-1]='';
  entity_2 = 46;
  memcpy(entity_3, entity_7, entity_2*sizeof(char));
}