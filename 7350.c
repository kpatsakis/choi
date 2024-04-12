void fun()
{
  int entity_8 = 82;
  entity_8 = 5;
  char entity_2 = 'T';
  char* entity_4;
  char entity_7[28] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[96-1]='';
  memset(entity_7, 'j', 28-1);
  entity_7[28-1]='';
  entity_7[entity_8] = 'e';
}