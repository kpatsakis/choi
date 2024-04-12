void fun()
{
  int entity_8 = 14;
  int entity_2 = 70;
  char entity_3 = 'K';
  char* entity_1;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', entity_2-1);
  entity_4[entity_2-1]='';
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  entity_4[42] = 'M';
}