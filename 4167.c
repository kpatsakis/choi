void fun()
{
  int entity_7 = 63;
  entity_7 = 45;
  char entity_9[87] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_0 = 'i';
  char* entity_2;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_9, 'G', 87-1);
  entity_9[87-1]='';
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[47-1]='';
  memcpy(entity_1, entity_9, 87*sizeof(char));
}