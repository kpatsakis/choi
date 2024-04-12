void fun()
{
  int entity_4 = 70;
  char* entity_1;
  char* entity_0;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'g', entity_4-1);
  entity_2[entity_4-1]='';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[84-1]='';
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[75-1]='';
  entity_4 = 89;
  memcpy(entity_1, entity_2, entity_4*sizeof(char));
}