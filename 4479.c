void fun()
{
  int entity_8 = 95;
  int entity_4 = 17;
  char* entity_9;
  char entity_2 = 'f';
  char entity_1[50] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_5 = (char*)malloc(35*sizeof(char));
  entity_5[35-1]='';
  memset(entity_1, 'o', 50-1);
  entity_1[50-1]='';
  entity_4 = 67;
  memcpy(entity_9, entity_1, 50*sizeof(char));
}