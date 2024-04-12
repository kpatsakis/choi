void fun()
{
  int entity_7 = 9;
  char entity_4 = 'e';
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  memset(entity_3, 'd', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[96] = 'l';
}