void fun()
{
  int entity_3 = 9;
  char* entity_8;
  char* entity_1;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[40-1]='';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  memset(entity_7, 'e', entity_3-1);
  entity_7[entity_3-1]='';
  entity_7[16] = 'h';
}