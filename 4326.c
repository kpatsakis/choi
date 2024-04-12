void fun()
{
  int entity_1 = 72;
  char* entity_8;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_6 = 'D';
  char* entity_2;
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  memset(entity_0, 'N', entity_1-1);
  entity_0[entity_1-1]='';
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[34-1]='';
  entity_1 = 70;
  memcpy(entity_2, entity_0, entity_1*sizeof(char));
}