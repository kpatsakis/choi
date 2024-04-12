void fun()
{
  int entity_8 = 90;
  char* entity_5;
  char entity_9[47] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'P', 47-1);
  entity_9[47-1]='';
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  entity_5 = (char*)malloc(82*sizeof(char));
  entity_5[82-1]='';
  memcpy(entity_5, entity_9, 47*sizeof(char));
}