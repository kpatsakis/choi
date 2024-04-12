void fun()
{
  int entity_1 = 90;
  int entity_7 = 27;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'k', entity_1-1);
  entity_6[entity_1-1]='';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  entity_6[35] = 'e';
}