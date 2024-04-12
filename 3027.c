void fun()
{
  int entity_6 = 80;
  char* entity_1;
  char entity_4[48] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  memset(entity_4, 'e', 48-1);
  entity_4[48-1]='';
  entity_4[entity_6] = 'b';
}