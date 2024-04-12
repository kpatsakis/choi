void fun()
{
  int entity_4 = 80;
  int entity_8 = 78;
  char* entity_2;
  char* entity_5;
  char entity_7[43] = "";
  entity_7 = NULL;
  char entity_6 = 'c';
  memset(entity_7, 'U', 43-1);
  entity_7[43-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  entity_4 = 28;
  memcpy(entity_5, entity_7, 43*sizeof(char));
}